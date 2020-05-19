var img = document.getElementById('InputImage');
window.addEventListener('load', function() {
    document.querySelector('input[type="file"]').addEventListener('change', function() {
        if (this.files && this.files[0]) {
            img.style.visibility="visible";
            img.src = URL.createObjectURL(this.files[0]);
            img.onload = imageIsLoaded;
        }
    });
});

function imageIsLoaded() {
    const image = document.getElementById("InputImage");
    const predictionOutput = document.getElementById("prediction_output");
    predictionOutput.innerText = "Loading model...";
    // Load the model.
    mobilenet.load().then(model => {
    // Classify the image. And output the predictions
    predictionOutput.innerText = "Predicting image...";
    model.classify(image).then(predictions => {
        predictionOutput.innerText = "[" + predictions[0].className + "]";
    });
    });
}