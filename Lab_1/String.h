#pragma once;

class String
{

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
private:
      char *p_str;
	  unsigned int length;
};