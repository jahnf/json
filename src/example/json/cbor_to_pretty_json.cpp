// Copyright (c) 2018-2021 Dr. Colin Hirsch and Daniel Frey
// Please see LICENSE for license or visit https://github.com/taocpp/json/

#include <iostream>

#include <tao/json.hpp>

int main( int argc, char** argv )
{
   if( argc != 2 ) {
      std::cerr << "usage: " << argv[ 0 ] << " file.cbor" << std::endl;
      std::cerr << "  parses the cbor file and writes it to stdout as pretty json" << std::endl;
      return 1;
   }
   tao::json::events::to_pretty_stream consumer( std::cout, 3 );
   tao::json::cbor::events::from_file( consumer, argv[ 1 ] );
   return 0;
}
