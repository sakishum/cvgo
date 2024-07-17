// What it does:
//
// 	This program outputs the current OpenCV library version to the console.
//
// How to run:
//
// 		go run ./cmd/version/main.go
//

package main

import (
	"fmt"

	"github.com/sakishum/cvgo"
)

func main() {
	fmt.Printf("cvgo version: %s\n", cvgo.Version())
	fmt.Printf("opencv lib version: %s\n", cvgo.OpenCVVersion())
}
