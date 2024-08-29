using System;

namespace Script.Dynamic
{
    [AttributeUsage(AttributeTargets.Property)]
    public class MakeEditWidgetAttribute : Attribute
    {
        public MakeEditWidgetAttribute(string InValue)
        {
            Value = InValue;
        }

        private string Value { get; set; }
    }
}