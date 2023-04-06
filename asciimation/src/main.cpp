#include "Menu.h"
#include "Video.h"
#include "Audio.h"

int main()
{
	Menu menu;

	while(!menu.GetValidFile());
	Video video(menu.GetFileName());
	Audio audio(menu.GetFileName());
	audio.Play();
	video.Play();

	return 0;
}