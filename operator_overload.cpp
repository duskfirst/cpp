#include <iostream>

class Vector2
{
    public:
        float x;
        float y;

        Vector2(float a, float b): x(a), y(b) {}
        Vector2 Add(const Vector2& other) const
        {
            return (Vector2(x + other.x, y + other.y));
        }
        Vector2 Multiply(const Vector2& other) const
        {
            return Vector2(x * other.x, y * other.y);
        }

        Vector2 operator+(const Vector2& other) const
        {
            return Add(other);
        }

        Vector2 operator*(const Vector2& other) const
        {
            return Multiply(other);
        }
};

std::ostream& operator<<(std::ostream& stream, const Vector2& other )
{
    stream << other.x << "," << other.y;
    return stream;
}
int main()
{
    Vector2 position(0.2f, 0.5f);
    Vector2 speed(0.25, 0.15f);
    Vector2 powerup(1.1f, 1.9f);

    Vector2 result1 = position.Add(speed.Multiply(powerup));
    Vector2 result2 = position + speed * powerup;

    std::cout << result2 << std:: endl;
}