#include <stdio.h>
enum Signal
{
    RED,
    YELLOW,
    GREEN
};
int main()
{
    enum Signal s;
    const char *names[] = {"RED", "YELLOW", "GREEN"};
    for (s = RED; s <= GREEN; s++)
    {
        printf("%s=%d\n", names[s], s);
    }
    return 0;
}
