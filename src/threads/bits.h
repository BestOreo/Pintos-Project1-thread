#define f (1 << 14)

#define MAX(x, y) ((x) > (y) ? (x) : (y))

#define con_to_float(n) ((n) *(f) )

#define con_to_int_round0(x) ((x)/(f))

#define con_to_int_roundnear(x) ((x)>=0 ? (((x)+(f)/2)/(f)) : (((x)-(f)/2)/(f)))
// #define con_to_int_roundnear(x) ((x)>=0) ? ((x + f) / 2) / f)

#define float_float_add(x,y) ((x)+(y))
#define float_float_minus(x,y) ((x)-(y))
#define float_float_mult(x,y) ((((int64_t) (x))*(y))/(f))
#define float_float_div(x,y) ((((int64_t) (x))*(f))/(y))

#define float_int_add(x,n) ((x)+((n)*(f)))
#define float_int_minus(x,n) ((x)-((n)*(f)))
#define float_int_mult(x,n) ((x)*(n))
#define float_int_div(x,n) ((x)/(n))
