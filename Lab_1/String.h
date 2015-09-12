#pragma once;

class String
{
	  char *p_str;
	  unsigned int length;
public:
	  String ();
	  String (char*);
	  String (const String &);
	  ~String ();
	  void setStr (char*);
      char* getStr () const;
	  int getLengthStr () const;
	  void printStr () const;
	  void printLengthStr () const;
	  void isSymbStr (char) const;
	  void replacSymbStr (char,char);
};