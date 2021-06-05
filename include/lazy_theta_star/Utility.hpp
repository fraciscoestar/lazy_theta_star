#pragma once

#include <cmath>
#include <vector>
#include <algorithm>

template<typename T>
struct Vector
{
    T x,y,z;

    Vector() = default;
    Vector(const Vector<T>&) = default; 
    Vector(const T x, const T y, const T z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    template<typename S>
    Vector(const Vector<S>& other)
    {
        x = other.x;
        y = other.y;
        z = other.z;
    }

    Vector<T> operator -(const Vector<T>& other) const
    {
        return {x - other.x, y - other.y, z - other.z};
    }

    Vector<T> operator +(const Vector<T>& other) const
    {
        return {x + other.x, y + other.y, z + other.z};
    }

    Vector<T> operator *(float k) const
    {
        return {x * k, y * k, z * k};
    }

    Vector<T> operator /(float k) const
    {
        return {x / k, y / k, z / k};
    }
};