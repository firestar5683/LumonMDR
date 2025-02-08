#pragma once
#include <imgui.h>
#include <memory>

#ifndef GLOBALS_H
#define GLOBALS_H
namespace ColorValues
{
    extern ImColor lumonBlue;
}
#endif

class UIManager {
public:
    virtual void init() = 0;
    virtual void draw() = 0;
    virtual void update() = 0;
    virtual void cleanup() = 0;

    virtual ~UIManager() = default;
};

std::shared_ptr<UIManager> createUIManager();