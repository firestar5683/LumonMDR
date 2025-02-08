#pragma once
#include <memory>

class ImageDisplay;

class IdleScreen {
public:
    virtual void update() = 0;
    virtual void drawIdleScreen() = 0;

    virtual ~IdleScreen() = default;
};

std::shared_ptr<IdleScreen> createIdleScreen(const std::shared_ptr<ImageDisplay>& imageDisplay);