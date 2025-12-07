# M6DTool
The reference implementation of the M6D six-degree-of-freedom VR video format. The tool has two parts: the renderer, where you can place objects in 3D space and define the movement of the VR device through said space, and the viewer, which displays M6D content via OpenXR.

## Format Specification
M6D videos are delivered via the .m6d file format. A .m6d file is just a ZIP file renamed. From now on, when we refer to the M6D format, we are referring to the contents of this ZIP file.

### Metadata.txt
Contains certain metadata about the video. It is structured like this:
`M6D METADATA
Name: <insert name here>
Length: <insert length in frames here>
FPS: <insert frames per second here>
Bound Size: <insert boundary size x here>, <insert boundary size y here>, <insert boundary size z here>
Height of centre: <insert height of centre from ground here>
Scene Count: <insert scene count here>
Audio: <0 = mono, 1 = stereo, 2 = object-based`
