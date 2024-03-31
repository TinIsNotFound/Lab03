#ifndef ELEMENT_H
#define ELEMENT_H

class Element
{
	private:
		int data;
		Element* pointer;

	public:
		Element();
		Element(int);
		virtual ~Element();
		
		int getdata() { return data; }
		void setdata(int val) { data = val; }
		Element* getpointer() { return pointer; }
		void Setpointer(Element* val) { pointer = val; }

	protected:

};
#endif // !ELEMENT_H
