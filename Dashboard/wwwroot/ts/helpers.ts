namespace helpers{
    // Simple Logger class that exposes a log method.
    class Logger{
        // Log text to console.
        public log(text: string){
            console.log(text);
        }
    }

    // Method to return an instance of the Logger class.
    export function getLogger(): Logger{
        return new Logger();
    }
}