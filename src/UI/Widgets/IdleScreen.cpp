#include "IdleScreen.h"

#include "ImageDisplay.h"
#include <imgui.h>
#include <iostream>

#include "../UIManager.h"

class IdleScreenImpl : public IdleScreen
{
public:
    explicit IdleScreenImpl(std::shared_ptr<ImageDisplay> imageDisplay_) : imageDisplay(std::move(imageDisplay_))
    {
        auto [width, height] = imageDisplay->getImageSize(logoPath);
        logoSize = ImVec2(width, height);
    }

    void update() final
    {
        // Want scale proportionally to the window size
        auto viewportSize = ImGui::GetMainViewport()->Size;
        if (lastViewportSize.x != viewportSize.x || lastViewportSize.y != viewportSize.y) {
            float displaySizeScalePrev = lastViewportSize.x/1280.f;
            float displaySizeScale = viewportSize.x/1280.f;
            float adjustedScale = displaySizeScale / displaySizeScalePrev;
            scale = adjustedScale * 0.5f;
            speed = adjustedScale * 0.5f;
        }
    }

    void drawIdleScreen() final
    {
        setLogoPosition();

        ImGui::SetCursorPos(currentLogoPosition);
        imageDisplay->drawImGuiImage(logoPath, scale, ColorValues::lumonBlue);
    }

    void setLogoPosition()
    {
        ImVec2 windowSize = ImGui::GetWindowSize();
        ImVec2 windowPos = ImGui::GetWindowPos();

        ImVec2 minPosition = ImVec2(windowPos.x, windowPos.y);
        ImVec2 maxPosition = ImVec2(windowPos.x + windowSize.x - scale*logoSize.x, windowPos.y + windowSize.y - scale*logoSize.y);

        if (currentLogoPosition.x >= maxPosition.x) {
            nextOffset.x = -1;
        } else if (currentLogoPosition.x < minPosition.x) {
            nextOffset.x = 1;
        }

        if (currentLogoPosition.y >= maxPosition.y) {
            nextOffset.y = -1;
        } else if (currentLogoPosition.y < minPosition.y) {
            nextOffset.y = 1;
        }

        currentLogoPosition = ImVec2(currentLogoPosition.x + speed*nextOffset.x, currentLogoPosition.y + speed*nextOffset.y);
    }

private:
    std::shared_ptr<ImageDisplay> imageDisplay;

    float speed = 0.5f;
    float scale = 0.5f;

    ImVec2 windowSize;
    ImVec2 windowPos;

    std::string logoPath = "lumon-logo.png";
    ImVec2 logoSize;
    ImVec2 lastViewportSize = ImVec2(1280, 720);

    ImVec2 currentLogoPosition;
    ImVec2 nextOffset = ImVec2(1,1);

};

std::shared_ptr<IdleScreen> createIdleScreen(const std::shared_ptr<ImageDisplay>& imageDisplay)
{
    return std::make_shared<IdleScreenImpl>(imageDisplay);
}