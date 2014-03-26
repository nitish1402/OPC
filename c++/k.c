    #include <u.h>

    #include <libc.h>

    #include <libg.h>

    #include <panel.h>

    Panel *root;

    void done(Panel *p, int buttons){

    	USED(p, buttons);

    	exits(0);

    }

    void main(void){

    	binit(0, 0, 0);

    	einit(Emouse);

    	plinit(screen.ldepth);



    	root=plframe(0, 0);

    	pllabel(root, 0, "Hello, world!");

    	plbutton(root, 0, "done", done);



    	ereshaped(screen.r);

    	for(;;) plmouse(root, emouse());

    }

    void ereshaped(Rectangle r){

    	screen.r=r;

    	plpack(root, r);

    	bitblt(&screen, r.min, &screen, r, Zero);

    	pldraw(root, &screen);

    }
