#include "core/layer_stack.h"

void LayerStack::PushLayer(Layer* layer)
{
    _layers.push_back(layer);
}
