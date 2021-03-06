/*
 * Copyright (C) 2009 Coen Bijlsma
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "CommandLine.h"

CommandLine::CommandLine(String* line, Vector<Delimeter>* delimeters 
    = (Vector<Delimeter>*)NULL )
    : line( *(*line) ), delimeters( delimeters )
{
    this->parse();
}

CommandLine::CommandLine(char* line, Vector<Delimeter>* delimeters 
    = (Vector<Delimeter>*)NULL )
    : line(line), delimeters( delimeters )
{
    this->parse();
}

Vector< CommandLineOption<String, String> > CommandLine::getOptions()
{
    return options;
}

CommandLineOption<String, String>* CommandLine::getOption(String& name)
{
    for( unsigned int i = 0; i < options.count(); i++ ) {
        CommandLineOption<String, String>* clo = options[i];
        if( name.equals(clo->getKey()) )
            return clo;
    }

    return (CommandLineOption<String, String>*)0;
}

CommandLineOption<String, String>* CommandLine::getOption(char* name)
{
    String nm(name);
    return this->getOption(nm);
}

void CommandLine::parse()
{
	
}
