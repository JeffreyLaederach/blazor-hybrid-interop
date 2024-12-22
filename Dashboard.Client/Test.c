int Add(int a, int b)
{
	return a + b;
}

// In order to make changes to this Native C Code, you need to have .NET WebAssembly Build Tools workload installed in your local Visual Studio installation.
// To do this, navigate to the ASP.NET and web development workload in the Visual Studio installer, and select the .NET WebAssembly build tools option from the list of optional components and install it.
// Or you can install "wasm-tools" workload via admin command shell using "dotnet workload install wasm-tools" command.
// Works using the Emscripten compiler toolchain which compiles the C code into WASM upon building the project/solution.
// Code can be called from C# using System.Runtime.InteropServices and the DllImport class. 
// This functionality allows for C functions to be utilized from C# on the front-end by compiling it into WASM. 
// Also provides versatility in that C code can be used for any particular needs that may arise on the front-end. 
// WASM compiled C is also quite fast and efficient so this is also another beneficial consideration. 

//int fact(int n)
//{
//	if (n == 0) return 1;
//	return n * fact(n - 1);
//}