package main

import "github.com/gin-gonic/gin"


func main() {
    r := gin.Default()
    r.GET("/ping", func(c *gin.Context) {
        c.JSON(200, gin.H{
            "message": "The place we promised in our early days",
        })
    })
    r.Run() // listen and server on 0.0.0.0:8080
}