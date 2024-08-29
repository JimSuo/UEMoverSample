using System;

namespace Script.Dynamic
{
    [AttributeUsage(AttributeTargets.Class)]
    public class NotEditInlineNewAttribute : Attribute
    {
        private string Value { get; set; } = "true";
    }
}