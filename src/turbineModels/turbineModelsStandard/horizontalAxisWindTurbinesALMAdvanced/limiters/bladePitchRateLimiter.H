            // Limit the change in blade pitch.

            scalar pitchRateCommanded = (bladePitchCommanded - (bladePitch[i][k]*degRad)) / dt;
            pitchRateCommanded = min(max(pitchRateCommanded, -(RateLimitBladePitch[j]*degRad)), (RateLimitBladePitch[j]*degRad));
            bladePitchCommanded = (bladePitch[i][k]*degRad) + (pitchRateCommanded * dt);
