#include <stdio.h>
#include <emscripten/bind.h>

using namespace emscripten;

void check(char *first)
{
	val require = val::global(first);
	printf("%s: %s\n", first, (require.as<bool>() ? "true" : "false"));
}

void checkGlobal(char *key)
{
	val v = val::global("global")[std::string(key)];
	printf("global.%s: %s", key, (v.as<bool>() ? "true" : "false"));
}

int main()
{
	check("global");
	check("require");
	checkGlobal("require");
	return 0;
}

