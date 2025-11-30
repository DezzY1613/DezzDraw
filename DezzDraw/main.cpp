#include "includes.h"
#include "field.cpp"
#include "render.cpp"
#include "selecting.cpp"


FieldCl Field;
SelectingCl Select;
RenderCl Render;


int main() {
	setlocale(LC_ALL, "Ru");
	Render.RenderVoid(Field.field, Field.signs);

	Select.SelectingXVoid();
	Field.SelectXField(Select.x);
	system("cls");
	Render.RenderVoid(Field.field, Field.signs);
	
	Select.SelectingYVoid();
	Field.SelectYField(Select.x, Select.y);
	system("cls");
	Render.RenderVoid(Field.field, Field.signs);


	return -0;
}
