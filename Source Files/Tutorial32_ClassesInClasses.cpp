#include <iostream>
#include <string>

class Car
{
    private:

        class Wheel
        {
            private:

            public:

                int pressure;

                Wheel(int pressure)
                {
                    this->pressure = pressure;
                }

                ~Wheel(){};
        };

        Wheel topLeft;
        Wheel topRight;
        Wheel bottomLeft;
        Wheel bottomRight;

    public:

        Car(): topLeft(150), topRight(120), bottomLeft(250), bottomRight(220)
        {

        };

        ~Car() {};

        void printWheels()
        {
            std::cout   << "Wheels Pressure: " << '\n'
                        << "Top Left: " << topLeft.pressure << '\n'
                        << "Top Right: " << topRight.pressure << '\n'
                        << "Bottom Left: " << bottomLeft.pressure << '\n'
                        << "Bottom Right: " << bottomRight.pressure << '\n' << '\n';
        }
    
};

int main()
{
    Car car1;

    car1.printWheels();

    return 0;
}