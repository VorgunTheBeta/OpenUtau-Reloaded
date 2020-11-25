#pragma once
class note
{
private:
	int noteID;

public:
	int length,noteNumber;
	float preutter, overlap, startPoint, intensity, modulation;
	float pbs[2];
	float pbw[3];
	float pby[3];
	char envelope[11];
	float vibrato[7];
	char lyric;
};

