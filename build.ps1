$program_name = "rainbow"

Write-Output "Building $program_name..."
mkdir bin
Write-Output "" # For empty string

gcc src\main.c -o bin\$program_name.exe
