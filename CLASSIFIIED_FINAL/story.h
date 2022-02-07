#ifndef STORY_H_INCLUDED
#define STORY_H_INCLUDED
int ti = 5000;
int storyIndex = 0;
void storyshow(){
	storyIndex++;
	if (storyIndex > 4){
		ti = 10;
	}

}




#endif