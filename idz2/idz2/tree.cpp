#include "pch.h"
#include "tree.h"

tree::knot::knot(int data)
{
	this->data = data;
	prev = nullptr;
	left = nullptr;
	right = nullptr;
	middle_left = nullptr;
	middle_right = nullptr;
}

tree::knot::~knot()
{

}

tree::tree()
{
	root = nullptr;
}

tree::~tree()
{
	remove(root);
}

void tree::remove(knot* cur)
{
	if (cur != nullptr)
	{
		remove(cur->left);
		remove(cur->middle_left);
		remove(cur->middle_right);
		remove(cur->right);
		delete cur;
		cur = nullptr;
	}
}

void tree::create_level(knot* cur, int* j)
{
	if (cur->left != nullptr)
	{
		create_level(cur->left, j);
		(*j) *= -1;
		create_level(cur->middle_left, j);
		create_level(cur->middle_right, j);
		(*j) *= -1;
		create_level(cur->right, j);
	}
	else
	{
		int a, b;
		if ((*j) == -1)
		{
			a = ((cur->data) - 1) % 4;
			if (a == -1)
				a = 3;
			b = ((cur->data) + 1) % 4;
		}
		else
		{
			b = ((cur->data) - 1) % 4;
			if (b == -1)
				b = 3;
			a = ((cur->data) + 1) % 4;
		}
		cur->left = new knot(a);
		cur->left->prev = cur;
		cur->middle_left = new knot(cur->data);
		cur->middle_left->prev = cur;
		cur->middle_right = new knot(cur->data);
		cur->middle_right->prev = cur;
		cur->right = new knot(b);
		cur->right->prev = cur;
	}
}

void tree::create_tree(int n)
{
	root = new knot(0);
	if (n > 1)
	{
		root->left = new knot(1);
		root->left->prev = root;
		root->middle_left = new knot(0);
		root->middle_left->prev = root;
		root->middle_right = new knot(0);
		root->middle_right->prev = root;
		root->right = new knot(3);
		root->right->prev = root;
		int j = -1;
		for (int i = 2; i < n; i++)
		{
			create_level(root, &j);
			j *= -1;
		}
	}
}

void tree::find_values(int* values, knot* cur, int* i)
{
	if (cur->left == nullptr)
	{
		values[(*i)] = cur->data;
		(*i)++;
	}
	else
	{
		find_values(values, cur->left, i);
		find_values(values, cur->middle_left, i);
		find_values(values, cur->middle_right, i);
		find_values(values, cur->right, i);
	}
}

void tree::create_values(int* values)
{
	int i = 0;
	find_values(values, root, &i);
}
