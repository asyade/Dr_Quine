#include <stdio.h>
//La norme ?
#define FMT "#include <stdio.h>%c//La norme ?%c#define FMT %c%s%c%c#define RUN int main(){FT}%c#define FT { FILE *f = fopen(%cGrace_kid.c%c, %cwc%c); fprintf(f, FMT, 10, 10, 34, FMT, 34, 10, 10, 34, 34, 34, 34, 10); }%cRUN"
#define RUN int main(){FT}
#define FT { FILE *f = fopen("Grace_kid.c", "wc"); fprintf(f, FMT, 10, 10, 34, FMT, 34, 10, 10, 34, 34, 34, 34, 10); }
RUN