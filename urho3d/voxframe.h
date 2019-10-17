#ifndef VOXFRAME_H
#define VOXFRAME_H

#include "vox.h"

class VoxFrame: public Vox
{
public:
    VoxFrame();
    ~VoxFrame();
    VoxFrame* GetNextFrame();
    void SetNextFrame(VoxFrame* nextFrame);

private:
    VoxFrame *nextFrame;
    
};

#endif // VOXFRAME_H
