#include <stdio.h>
#include <stdlib.h>


struct color_rgb
{
    unsigned char r;
    unsigned char g;
    unsigned char b;
};

struct color_rgba
{
    unsigned char r;
    unsigned char g;
    unsigned char b;
    float         a;
};


union color
{
    struct color_rgb  rgb;
    struct color_rgba rgba;

    unsigned int value;
    char name[20];
}

main()
{

    union color console_color;

    printf("Size of color variable = %d\n\n", sizeof(console_color));


    printf("Enter space separated rgb color value: ");
    scanf("%d %d %d", &console_color.rgb.r,
                      &console_cole_olor.rgb.g,
                      &conscolor.rgb.b);

    printf("Color in rgb format: %d %d %d\n\n",
                      console_color.rgb.r,
                      console_color.rgb.g,
                      console_color.rgb.b);


    printf("Enter space separated rgba color value: ");
    scanf("%d %d %d %f", &console_color.rgba.r,
                         &console_color.rgba.g,
                         &console_color.rgba.b,
                         &console_color.rgba.a);

    printf("Color in rgba format: %d %d %d %.2f\n\n",
                         console_color.rgba.r,
                         console_color.rgba.g,
                         console_color.rgba.b,
                         console_color.rgba.a);


    printf("Enter integer color value: ");
    scanf("%d", &console_color.value);
    printf("Color in integer format: %d\n\n", console_color.value);


    printf("Enter string color value: ");
    getchar();

    gets(console_color.name);
    printf("Color in string format: %s\n\n", console_color.name);


    //return 0;
}
