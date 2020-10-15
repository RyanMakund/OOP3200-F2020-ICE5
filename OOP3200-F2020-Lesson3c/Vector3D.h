#pragma once
#ifndef _VECTOR3D_
#define _VECTOR3D_

#include <string>

template <class T>
class Vector3D
{
public:
	Vector3D(T x = static_cast<T>(0.0), T y = static_cast <T>(0.0), T z = static_cast<T>(0.0));
	~Vector3D();

	// accessors
	T GetX() const;
	T GetY() const;
	T GetZ() const;

	// mutators
	void setX(const T x);
	void setY(const T y);
	void setZ(const T z);
	void set(const T x, const T y, const T z);

	std::string ToString() const;
	
private:
	T m_x;
	T m_y;
	T m_z;
};

#endif /* defined (_VECTOR3D_) */

