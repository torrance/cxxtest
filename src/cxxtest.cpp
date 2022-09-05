#include <jlcxx/jlcxx.hpp>

class Rectangle {
    int width, height;
  public:
    Rectangle(int, int);
    int area() {
        return width * height;
    }
};

Rectangle::Rectangle(int a, int b) {
  width = a;
  height = b;
}

JLCXX_MODULE define_julia_module(jlcxx::Module &mod) {
    mod.add_type<Rectangle>("Rectangle")
       .constructor<int, int>();
}