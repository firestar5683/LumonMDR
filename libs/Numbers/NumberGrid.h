#pragma once

#include "Number.h"

#include <map>
#include <memory>

class NumberGrid
{
public:
    virtual void update() = 0;

    virtual std::map<int, std::map<int, NumberPtr>> getGrid() = 0;
    virtual NumberPtr getGridNumber(int x, int y) = 0;
    virtual NumberPtr getGridNumber(int id) = 0;

    virtual std::map<int, BadGroupPtr> getBadGroups() const = 0;

    virtual int randomNumber(int min, int max) = 0;

    virtual ~NumberGrid() = default;
};

std::shared_ptr<NumberGrid> createNumberGrid(int gridSize);