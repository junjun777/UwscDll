#pragma once
using namespace System;

ref class UnmanagedCpp
{
public:
	UnmanagedCpp();
	virtual ~UnmanagedCpp();

	String^ JoinString(String^ s1, String^ s2);
};

