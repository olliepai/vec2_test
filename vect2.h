class vect2 {
    public:
        float x;
        float y;

    vect2() {

    }

    vect2(float f) {
        x = f;
        y = f;
    }

    vect2(float xVal, float yVal) {
        x = xVal;
        y = yVal;
    }

    void add(vect2 v) {
        x += v.x;
        y += v.y;
    }

    void sub(vect2 v) {
        x -= v.x;
        y -= v.y;
    }

    void mul(vect2 v) {
        x *= v.x;
        y *= v.y;
    }

    void div(vect2 v) {
        x /= v.x;
        y /= v.y;
    }

    bool equals(vect2 v) {
        if (x == v.x && y == v.y) {
            return 1;
        } 

        return 0;
    }
};