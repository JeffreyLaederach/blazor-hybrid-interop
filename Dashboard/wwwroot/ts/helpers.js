var helpers;
(function (helpers) {
    // Simple Logger class that exposes a log method.
    class Logger {
        // Log text to console.
        log(text) {
            console.log(text);
        }
    }
    // Method to return an instance of the Logger class.
    function getLogger() {
        return new Logger();
    }
    helpers.getLogger = getLogger;
})(helpers || (helpers = {}));
//# sourceMappingURL=helpers.js.map