#pragma once

class tree {
private:
	class knot {
	public:
		int data;
		knot* prev;
		knot* left;
		knot* middle_left;
		knot* middle_right;
		knot* right;
		knot(int data);
		~knot();
	};
	knot* root;
	void remove(knot* cur);
	void create_level(knot*cur, int* j);
	void find_values(int* values, knot* cur, int* i);
public:
	tree();
	~tree();
	void create_tree(int n);
	void create_values(int* values);
};