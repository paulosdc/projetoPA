#ifndef VOXEL_HPP
#define VOXEL_HPP

////@short Volume element
/// @param r red color intensity.
/// @param g green color intensity.
/// @param b blue color intensity.
/// @param a element tranparency.
/// @param isOn show if the Voxel is active.
struct Voxel
{
  float r, g, b;
  float a;
  bool isOn;
};

#endif // VOXEL_HPP
