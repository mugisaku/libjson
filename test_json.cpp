#include"json.hpp"
#include"json_stream.hpp"




using namespace libjson;


int
main(int  argc, char**  argv)
{
  argc -= 1;
  argv += 1;

    while(argc--)
    {
      FilePath  path(*argv++);

        try
        {
          Value  v(path);

          printf("{\"%s\":\n%s\n}\n",path.string,v.to_string().data());
        }


        catch(Stream&  s)
        {
          printf("%sの読み込みに失敗しました\n",path.string);

          s.print();
        }
    }


  return 0;
}




