#pragma once

#include <vector>

#include "core/layer.h"

class LayerStack
{
public:
    LayerStack() = default;
    ~LayerStack();

    void PushLayer(Layer* layer);

private:
    std::vector<Layer*> _layers;
};
