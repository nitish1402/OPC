
/* The Duff device 
 *
 * An infamous example of how a compiler can accept code that should
 * be illegal as per the language definition. To add insult to injury,
 * the illegal code actually runs faster. 
 *
 * The functions send and send2 accomplish the same goal (copying a
 * string from one location to another) but send2 manages to screw
 * with your head and achieve its goal much faster (on most
 * architectures). 
 * 
 * The answer to the puzzle of how send2 actually works is exposed in
 * the function send3 (see the comment above the function send3).
 *
 * This strange piece of code is named after the programmer who
 * discovered this 'optimization' technique.
 *
 * -- Anoop Sarkar <anoop at cs.sfu.ca>
 **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>

/* pick BUFLEN to be a suitably large number to show the speed
   difference between send and send2 */
const size_t BUFLEN = 400000000;

void
send (register char *to, register char *from, register int count)
{
  do
    *to++ = *from++;
  while(--count>0);
}

void
send2 (register char *to, register char *from, register int count)
{
  register int n = (count+7)/8;
  switch (count % 8) {
  case 0: do {     *to++ = *from++;
  case 7:          *to++ = *from++;
  case 6:          *to++ = *from++;
  case 5:          *to++ = *from++;
  case 4:          *to++ = *from++;
  case 3:          *to++ = *from++;
  case 2:          *to++ = *from++;
  case 1:          *to++ = *from++;
  } while(--n>0);
  }
}

/* The answer to the mystery turns out to be simple loop unfolding.
 * send2 uses the semantics for switch statements in C to provide a
 * mnemonic for how many assignments should occur within the body of
 * the do-while loop. 
 *
 * So why is send2 faster than send on some architectures? The
 * conditional is a slow instruction to execute on many machine
 * architectures. 
 *
 * Try compiling with gcc with and without the -O3 flag. Turning the
 * optimizer on (using -O3) shows the power of code optimization: send
 * runs as fast as send2 with the optimizer on.
 **/ 

int
main (int argc, char **argv)
{
  char *from, *to;
  int i;
  struct timeval before, after;

  from = (char *) malloc(BUFLEN * sizeof(char));
  to = (char *) malloc(BUFLEN * sizeof(char));

  memset(from, 'a', (BUFLEN * sizeof(char)));
  printf("array init done\n");

  printf("calling send\n");
  gettimeofday(&before, NULL);
  send(to, from, BUFLEN);
  gettimeofday(&after, NULL);
  printf("secs=%lf\n", after.tv_sec - before.tv_sec);

  printf("calling send2\n");
  gettimeofday(&before, NULL);
  send2(to, from, BUFLEN);
  gettimeofday(&after, NULL);
  printf("secs=%lf\n", after.tv_sec - before.tv_sec);

  if (strcmp(from,to) == 0) {
    printf("from=to\n");
  } else {
    printf("from!=to\n");
  }

  free(from);
  free(to);

  return(0);
}
