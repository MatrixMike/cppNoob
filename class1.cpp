// mod 27 Oct 2016
const int  STACK_SIZE  = 200;

class stack {
	private:
		int count ;
		int data[STACK_SIZE];
	public:
		void init(void);
		void push (const int item);
		int pop(void);
};

