#include "Vector3D.h"
#include <cmath>
#include <iostream>

// Stream output (friend function for printing)
std::ostream& operator<<(std::ostream& os, const Vector3D& v) {
    os << "(" << v.m_x << ", " << v.m_y << ", " << v.m_z << ")";
    return os;
}

// TODO: Define the "magnitude" function
// - This function computes the magnitude of the vector.
// - Formula: sqrt(x^2 + y^2 + z^2)
double Vector3D::magnitude() const {
    
    // Fill in the blank.
    return sqrt(pow(m_x, 2) + pow(m_y, 2) + pow(m_z, 2));
}


// TODO: Define the parameterized constructor.
Vector3D::Vector3D(double m_x, double m_y, double m_z) {
    this->m_x = m_x;
    this->m_y = m_y;
    this->m_z = m_z;
}


// TODO: Define the "innerProduct" function.
// - Formula: v1.x * v2.x + v1.y * v2.y + v1.z * v2.z
double innerProduct(Vector3D& v1, Vector3D& v2) {
    return v1.m_x * v2.m_x + v1.m_y * v2.m_y + v1.m_z * v2.m_z;
}


// TODO: Define the "crossProduct" function.
// - Formula: (v1.y * v2.z - v1.z * v2.y,
//             v1.z * v2.x - v1.x * v2.z,
//             v1.x * v2.y - v1.y * v2.x)
Vector3D crossProduct(Vector3D& v1, Vector3D& v2) {
    return Vector3D(v1.m_y * v2.m_z - v1.m_z * v2.m_y,
        v1.m_z * v2.m_x - v1.m_x * v2.m_z,
        v1.m_x * v2.m_y - v1.m_y * v2.m_x);
}


