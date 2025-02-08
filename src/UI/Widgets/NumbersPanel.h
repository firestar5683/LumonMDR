#pragma once
#include <memory>

class ImageDisplay;

class NumbersPanel {
public:
    virtual void init() = 0;
    virtual void update() = 0;

    virtual void drawNumbersPanel() = 0;
    virtual void drawSettings() = 0;

    virtual void triggerLoadAnimation() = 0;

    virtual ~NumbersPanel() = default;
};

std::shared_ptr<NumbersPanel> createNumbersPanel(const std::shared_ptr<ImageDisplay>& imageDisplay);