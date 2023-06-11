//#pragma once
#include <iostream>
#include <cmath>
class Vector3
{
    public:
    float x = 0;
    float y = 0;
    float z = 0;

    Vector3(){};
    ~Vector3(){};

    Vector3(float x, float y, float z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
        
    }

    void print()
    {
        std::cout<< "X: " << this->x <<" Y: "<< this->y <<" Z: "<< this->z <<std::endl;
    }

    // Start Your Assignment Here.
    float length() {
         std::sqrt(x*x+y*y+z*z);  
    }
    Vector3 operator*(float scalar){
        return Vector3(x*scalar,y*scalar,z*scalar);
    }
    // double operator*(const Vector3& other) {
        // return x * other.x + y * other.y + z * other.z;
    // }
    double dot(const Vector3& other)  {
        return x * other.x + y * other.y + z * other.z;
    }

    Vector3 cross(const Vector3& other) {
        return Vector3(
            y * other.z - z * other.y,
            z * other.x - x * other.z,
            x * other.y - y * other.x
        );
    }
    Vector3 operator+(const Vector3& other){
        return Vector3(x + other.x, y + other.y, z + other.z);
    }
    Vector3 operator/(double scalar){
        return Vector3(x / scalar, y / scalar, z / scalar);
    }
    Vector3 operator-(const Vector3& other){
        return Vector3(x - other.x, y - other.y, z - other.z);
    }



    

};

