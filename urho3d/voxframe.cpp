#include "voxframe.h"

VoxFrame::VoxFrame()
{
}

VoxFrame::~VoxFrame()
{
}


VoxFrame* VoxFrame::GetNextFrame()
{
    return nextFrame;
}


void VoxFrame::SetNextFrame(VoxFrame* nextFrame) {
    this->nextFrame = nextFrame;
}

