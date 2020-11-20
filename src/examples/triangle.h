#pragma once

#include "core/layer.h"

class Triangle : public Layer
{
    void Attach() override;
    void Detach() override;
    void Update() override;
};
