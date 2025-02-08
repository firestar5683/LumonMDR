#pragma once

#include "imgui.h"

#include <memory>
#include <optional>
#include <string>
#include <vector>

class ImageDisplay {
public:
    virtual void drawImGuiImage(const std::string& imagePath, float scale, std::optional<ImVec4> tint) = 0;
    virtual std::pair<int, int> getImageSize(const std::string &imagePath) = 0;

    virtual ~ImageDisplay() = default;
};

std::shared_ptr<ImageDisplay> createImageDisplay(const std::string& assetDir);
