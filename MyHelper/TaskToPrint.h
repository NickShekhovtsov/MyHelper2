#pragma once
class TaskToPrint
{
	char text[3000];
	char required_paper_size[3] = "A4";
public:
	void set_text(char* text);
	char* get_text();
	void set_required_paper_size(char* required_paper_size);
	char* get_required_paper_size();
};

