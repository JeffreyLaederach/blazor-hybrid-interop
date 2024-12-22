Public Class Activity
    Private _action As String
    Public Property Action() As String
        Get
            Return _action
        End Get
        Set(value As String)
            _action = value
        End Set
    End Property

    Private _time As Integer
    Public Property Time() As Integer
        Get
            Return _time
        End Get
        Set(value As Integer)
            _time = value
        End Set
    End Property
End Class