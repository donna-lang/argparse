/* argv.c — self-contained argv access for the argparse package.
 *
 * Provides main(), donna_argv_count(), and donna_argv_get() using private
 * static storage — no dependency on donna_rt.c globals.
 *
 * The strong main() here overrides the weak main() in donna_rt.c when this
 * file is linked into a project.
 */
#include <stdint.h>

extern intptr_t donna_program_main(void);

static int    g_argc = 0;
static char **g_argv = 0;

intptr_t donna_argv_count(void) {
    return (intptr_t)g_argc;
}

intptr_t donna_argv_get(intptr_t i) {
    return (intptr_t)g_argv[i];
}

int main(int argc, char **argv) {
    g_argc = argc;
    g_argv = argv;
    return (int)donna_program_main();
}
