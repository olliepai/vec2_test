class vec2 {
    public:
        float x;
        float y;

    vec2() {

    }

    vec2(float f) {
        x = f;
        y = f;
    }

    vec2(float xVal, float yVal) {
        x = xVal;
        y = yVal;
    }

    void add(vec2 v) {
        x += v.x;
        y += v.y;
    }

    void sub(vec2 v) {
        x -= v.x;
        y -= v.y;
    }

    void mul(vec2 v) {
        x *= v.x;
        y *= v.y;
    }

    void div(vec2 v) {
        x /= v.x;
        y /= v.y;
    }

    bool equals(vec2 v) {
        if (x == v.x && y == v.y) {
            return 1;
        } 

        return 0;
    }

    vec2 operator+(vec2 v) {
        vec2 v2(x + v.x, y + v.y);
        return v2;
    }

    vec2 operator-(vec2 v) {
        vec2 v2(x - v.x, y - v.y);
        return v2;
    }

    vec2 operator*(vec2 v) {
        vec2 v2(x * v.x, y * v.y);
        return v2;
    }

    vec2 operator/(vec2 v) {
        vec2 v2(x / v.x, y / v.y);
        return v2;
    }

    void operator+=(vec2 v) {
        this->add(v);
    }

    void operator-=(vec2 v) {
        this->sub(v);
    }

    void operator*=(vec2 v) {
        this->mul(v);
    }

    void operator/=(vec2 v) {
        this->div(v);
    }

    void operator=(vec2 v) {
        x = v.x;
        y = v.y;
    }

    bool operator==(vec2 v) {
        if (this->equals(v)) {
            return 1;
        }
        return 0;
    }

    bool operator!=(vec2 v) {
        if (x != v.x || y != v.y) {
            return 1;
        }
        return 0;
    }
};